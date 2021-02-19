public class Buggy {
    
    static class Duck {
        private String name;
        
        public Duck(String name) {
            name = name;
        }
        
        public String getName() {
            return name;
        }
        
        public void setName(String name) {
            name = name;
        }
    }
    
    public static void main(String[] args) {
        Duck duck = new Duck("Robert");
        String name = duck.getName();
        
        System.out.printf("The duck's name is %s\n", name);
        
        duck.setName("Bill");
        
        System.out.printf("Now the duck's name is %s\n", name);
    }
}
