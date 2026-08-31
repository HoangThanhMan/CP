class Base {
    public Base() {
        System.out.println("Base::Base()");
    }

    public Base(int x) {
        System.out.println("Base::Base(int x)");
    }

    public Base(int x, int y) {
        System.out.println("Base::Base(int x, int y)");
    }

    public Base(Base b) {
        System.out.println("Base::Base(Base b)");
    }

    public Base assign(Base b) {
        System.out.println("Base::assign(Base b)");
        return this;
    }

    public void doSth(int x) {
        System.out.println("Base::doSth(int x)");
    }

    public void doSthE(int x) {
        System.out.println("Base::doSthE(int x)");
    }

    protected void finalize() {
        System.out.println("Base::~Base()");
    }
}

class Derived extends Base {
    public Derived() {
        System.out.println("Derived::Derived()");
    }

    public Derived(int x) {
        super(x);
        System.out.println("Derived::Derived(int x)");
    }

    public Derived(int x, int y) {
        super(x, y);
        System.out.println("Derived::Derived(int x, int y)");
    }

    public Derived(Derived d) {
        super(d);
        System.out.println("Derived::Derived(Derived d)");
    }

    public Derived assign(Derived d) {
        super.assign(d);
        System.out.println("Derived::assign(Derived d)");
        return this;
    }

    @Override
    public void doSth(int x) {
        System.out.println("Derived::doSth(int x)");
    }

    @Override
    public void doSthE(int x) {
        System.out.println("Derived::doSthE(int x)");
    }

    @Override
    protected void finalize() {
        System.out.println("Derived::~Derived()");
        try {
            super.finalize();
        } catch (Throwable e) {
            e.printStackTrace();
        }
    }
}

public class Main {
    public static void testing(Base first, Derived second) {
        System.out.println("Testing 3:");
        Derived x = new Derived();
        x.assign(second);
        first.doSth(1);
        second.doSthE(2);
        System.out.println("Testing 4:");
        x.doSth(3);
        x.doSthE(4);
    }

    public static void main(String[] args) {
        System.out.println("Testing 1:");
        Derived x = new Derived(5);
        Derived y = new Derived(3, 7);
        System.out.println("Testing 2:");
        testing(x, y);
        System.out.println("Testing 5:");
        System.gc(); // To explicitly call the garbage collector to show finalizers output
    }
}
