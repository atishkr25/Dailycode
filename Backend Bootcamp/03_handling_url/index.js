const http = require("http");
const fs = require("fs");
// keep url import (even if not strictly needed)
const url = require("url");

const myServer = http.createServer((req, res) => {

    if (req.url === "/favicon.ico") return res.end();

    const log = `${Date.now()} : ${req.url} : New Request Recieved\n`;

    // old method (working but legacy)
    // const myUrl = url.parse(req.url, true);

    // ✅ new method (FIXED — your way)
    const myUrl = new URL(req.url, `http://${req.headers.host}`);
    console.log(myUrl);

    fs.appendFile("log.txt", log, (err) => {

        switch (myUrl.pathname) {

            case "/":
                res.end("Home Page");
                break;

            case "/about":
                // query parameter (NEW way)
                const username = myUrl.searchParams.get("myname");
                console.log(username);
                res.end(`Hii, ${username}`);
                break;

            case "/search":
                const search = myUrl.searchParams.get("search_query");
                console.log(search);
                res.end("Here are your result for " + search);
                break;

            default:
                res.end("404 Not Found");
        }
    });
});

const PORT = 8000;
myServer.listen(PORT, () => {
    console.log(`Server started at port no ${PORT}`);
});
