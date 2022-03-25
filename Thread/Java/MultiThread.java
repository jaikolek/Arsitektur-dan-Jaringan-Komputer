// multi thread handler

public class MultiThread extends Thread {
    // override run method
    @Override
    public void run() {
        for (int i = 1; i <=20; i++) {
            System.out.println("Thread " + i + " is Working");

            if (i % 2 != 0) {
                try {
                    Thread.sleep(1000);
                } 
                catch (InterruptedException e) {}
            }
            else {
                try {
                    Thread.sleep(2500);
                } 
                catch (InterruptedException e) {}
            }
        }
    }   
}