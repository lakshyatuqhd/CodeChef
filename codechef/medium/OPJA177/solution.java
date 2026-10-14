class ThreadFunction1 implements Runnable {
    @Override
    public void run() {
        for (int i = 0; i < 5; ++i) {
            try {
                Thread.sleep(10); // Sleep for 10 milliseconds
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Thread 1: " + i);
        }
    }
}


class ThreadFunction2 implements Runnable {
    @Override
    public void run() {
        for (int i = 0; i < 5; ++i) {
            try {
                Thread.sleep(10); // Sleep for 10 milliseconds
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            System.out.println("Thread 2: " + i);
        }
    }
}


class Codechef {
    public static void main(String[] args) {
        Thread t1 = new Thread(new ThreadFunction1());
        Thread t2 = new Thread(new ThreadFunction2());
        t1.start();
        t2.start();
        try {
            t1.join(); // Wait for t1 to finish
            t2.join(); // Wait for t2 to finish
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        System.out.println("Main thread: Done!");
    }
}

