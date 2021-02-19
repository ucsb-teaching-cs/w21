public class Buggy3 {
    
    public static class FirstException extends Exception {};
    
    public static class SecondException extends FirstException {};
    
    public static void oopsies(boolean throwFirst) throws FirstException, SecondException {
        if (throwFirst)
            throw new FirstException();
        else
            throw new SecondException();
    }
    
    public static void main(String[] args) {
        try {
            oopsies(true);
        } catch (FirstException firstException) {
            System.out.println("The first exception occured!");
        } catch (SecondException secondException) {
            System.out.println("The second exception occured!");
        }
    }
}