package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {

    public static void main(String[] args) {

        // Direct object
        Veena v = new Veena();
        v.play();

        Saxophone s = new Saxophone();
        s.play();

        // Polymorphism
        Playable p1 = new Veena();
        Playable p2 = new Saxophone();

        p1.play();
        p2.play();
    }
}
