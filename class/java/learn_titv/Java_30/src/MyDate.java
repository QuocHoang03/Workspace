public class MyDate {
    private int day;
    private int month;
    private int year;

    public MyDate(int day, int month, int year){
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public void printDay(){
        System.out.println("Day : "+day);
    }

    public void printMonth(){
        System.out.println("Month : "+month);
    }

    public void printYear(){
        System.out.println("Year : "+year);
    }

    public void printDate(){
        System.out.println("Date : "+this.day+"/"+this.month+"/"+this.year);
    }

}
