public class Vector2D {
    Point2D x, y;

    public Vector2D(Point2D x, Point2D y) {
        this.x = x;
        this.y = y;
    }

    public double getEdge(){
        return x.getDistance(y);
    }

    public boolean ifEquilateral(Vector2D v2, Vector2D v3){
        if (this.getEdge() == v3.getEdge() && this.getEdge() == v2.getEdge()){
            return true;
        } else
            return this.getEdge() == v2.getEdge() || this.getEdge() == v3.getEdge() || v2.getEdge() == v3.getEdge();
    }
    
    public boolean ifRectangular(Vector2D v2, Vector2D v3){
        if (this.getPitagoras(v2,v3)){
            return true;
        }
        else if(v2.getPitagoras(this,v3)){
                return true;
        }else
                return v3.getPitagoras(this,v2);
    }

    private double getSquare(){
        return this.getEdge()* this.getEdge();
    }
    
    private boolean getPitagoras(Vector2D v2, Vector2D v3){
        return this.getSquare() ==  v3.getSquare() + v2.getSquare();
    }
    
}
