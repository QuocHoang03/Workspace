public class Circle implements Shape{
    private double width;
    private double length;
    public Circle(double width, double length) {
        this.width = width;
        this.length = length;
    }
    @Override
    public String toString() {
        return "Rectangle [width=" + width + ", length=" + length + "]";
    }

    @Override
    public double getArea(){
        return length*width;
    }

    @Override 
    public double getPerimeter(){
        return (length+width)*2;
    }
}
