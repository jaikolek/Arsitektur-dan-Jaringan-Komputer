// single handled thread

public class OddThread extends Thread{
    // override run method
    @Override
    public void run() {
        // printed thread number
        System.out.println("Thread " + Main.number + " is Working");
        
        try {
            // time delay after odd thread worked
            Thread.sleep(1000);
        } 
        catch (InterruptedException e) {}
        }
}
