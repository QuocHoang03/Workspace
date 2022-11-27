package shapedemo;

abstract public class Shape {
    protected String color;

    public Shape(String color) {
        this.color = color;
    }
    
    abstract public double getArea();

    @Override
    public String toString() {
        return "color=" + color;
    }  
}
