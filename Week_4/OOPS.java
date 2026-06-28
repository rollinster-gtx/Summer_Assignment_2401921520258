interface Test {
    int square(int n);
}

class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}

class Outer {

    void display() {
        System.out.println("Display of Outer Class");
    }

    class Inner {
        void display() {
            System.out.println("Display of Inner Class");
        }
    }
}

class Point {

    private int x, y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void setX(int x) {
        this.x = x;
    }

    void setY(int y) {
        this.y = y;
    }

    void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void display() {
        System.out.println("Point = (" + x + ", " + y + ")");
    }
}

class Box {

    int length, breadth;

    Box(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
}

class Box3D extends Box {

    int height;

    Box3D(int l, int b, int h) {
        super(l, b);
        height = h;
    }

    int volume() {
        return length * breadth * height;
    }
}

public class OOPS {

    public static void main(String[] args) {

        System.out.println("===== Program 1 =====");
        Arithmetic a = new Arithmetic();
        System.out.println("Square of 5 = " + a.square(5));

        System.out.println("\n===== Program 2 =====");
        Outer o = new Outer();
        o.display();
        Outer.Inner in = o.new Inner();
        in.display();

        System.out.println("\n===== Program 3 =====");
        Point p = new Point();
        p.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p2.setXY(30, 40);
        p2.display();

        System.out.println("\n===== Program 4 =====");
        Box3D b = new Box3D(5, 4, 3);
        System.out.println("Area = " + b.area());
        System.out.println("Volume = " + b.volume());
    }
}
