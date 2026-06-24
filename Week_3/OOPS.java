abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "Notice: Welcome to First Class Compartment.";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Notice: This compartment is reserved for Ladies.";
    }
}

class General extends Compartment {
    public String notice() {
        return "Notice: General Compartment.";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Notice: Luggage Compartment. Passengers not allowed.";
    }
}

public class OOPS {
    public static void main(String[] args) {

        Compartment[] compartments = new Compartment[10];

        for (int i = 0; i < 10; i++) {

            int random = (int)(Math.random() * 4) + 1;

            switch(random) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;

                case 2:
                    compartments[i] = new Ladies();
                    break;

                case 3:
                    compartments[i] = new General();
                    break;

                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }

        System.out.println("Compartment Notices:");

        for (Compartment c : compartments) {
            System.out.println(c.notice());
        }
    }
}
