public class Movablepoint extends Point{

    public Movablepoint(double x, double y) {
        super(x, y);
    }

    void moveIt(double xShift, double yShift ){
        this.setY(yShift);
        this.setX(xShift);
    }

}

import static java.lang.Math.sqrt;

public class Point {
    private double x,y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double distance(Movablepoint p){
        return sqrt((x- p.getX())*(x- p.getX())+(y-p.getY())*(y-p.getY()));
    }


    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    protected void setY(double y){
        this.y = y;
    }

    protected void setX(double x){
        this.x = x;
    }

}
