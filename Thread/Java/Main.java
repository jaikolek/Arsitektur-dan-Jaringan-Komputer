public class Main {
    // global number
    public static int number;
    public static void main(String[] argv) {
        /* 
        * Multi Thread Handler
        MultiThread Work = new MultiThread();
        Work.run();
        */
       
        // single thread handler
        OddThread odd_thread = new OddThread();
        EvenThread even_thread = new EvenThread();

        for (int i = 1; i <=20; i++) {
            number = i;
            if (number % 2 != 0) {
                odd_thread.run();
            } else {
                even_thread.run();
            }
        }

        System.out.println("Thread is Completed...");
    }
}