console.log("hello world")


// THIS IS THE EXAMPLE OF SYNCH FILE READ


// let temp = fs.readFileSync('input.txt', 'utf-8');
// console.log(temp);

// temp = `this line is from fastXfurious : ${temp}\n Created on ${new Date().toLocaleString()}`;

// fs.writeFileSync('output.txt', temp);




//NOW here is Asynchronous file reading : non-blocking file read and write

//CALLBACK LOOPS:----------

const fs = require('fs');

fs.readFile('input.txt', 'utf-8',  (err, data1) => {
    if (err) return console.log(err);

    fs.readFile(`${data1}.txt`, 'utf-8', (err, data2) => {
        if (err) return console.log(err);
        console.log(data2);

        fs.writeFile('finalText.txt', `${data1}\n${data2}`, err => {
            if (err) return console.log(err);
            console.log("file has been written bro");
        });
    });
});

console.log("will read file");
