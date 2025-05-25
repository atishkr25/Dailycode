

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;


public class Filecopy {
    public static void main(String[] args) throws IOException {
        FileInputStream fin = new FileInputStream("C:\\Users\\atish\\OneDrive\\Desktop\\java\\Lab Work\\input.txt");
        FileOutputStream fout = new FileOutputStream("C:\\Users\\atish\\OneDrive\\Desktop\\java\\Lab Work\\output.txt");

        int data;
        while ((data = fin.read()) != -1) {
            fout.write(data);
        }
        
        fin.close();
        fout.close();

        System.out.println("File copied successfully.");

    }
}
