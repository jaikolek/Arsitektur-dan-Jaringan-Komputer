// single handled thread

public class EvenThread extends Thread{
    // override run method
    @Override
    public void run() {
        // printed thread number
        System.out.println("Thread " + Main.number + " is Working");
    
        try {
            // time delay after even thread worked
            Thread.sleep(2500);
        } 
        catch (InterruptedException e) {}
        }
}
