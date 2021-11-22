class RahatPlayer {
    String name;
    String addr;
    int number;
    String status;
    public RahatPlayer(String name,String addr, int number, String status){
        this.name = name;
        this.addr = addr;
        this.number=number;
        this.status = status;
    }
    public void avg(int run,int match){
        System.out.println((run*100)/match);
    }
    public static void main(String[] args){
        RahatBatsman rahat = new RahatBatsman("rahat", "pabna", 01, "batsman", 5000, 1000);
        RahatBowler rohan = new RahatBowler("rohan","pabna",02,"bowler",500,1000);
        rahat.avg(rahat.run, rahat.numofmatch);
        rohan.avg(rohan.wicket,rohan.numofmatch);
     }
}

class RahatBatsman extends RahatPlayer{
    int run;
    int numofmatch;
    public RahatBatsman(String name, String addr, int number, String status, int run,int numofmatch){
        super(name, addr, number, status);
        this.run = run;
        this.numofmatch = numofmatch;
    }
}

class RahatBowler extends RahatPlayer{
    int wicket;
    int numofmatch;
    public RahatBowler(String name, String addr, int number, String status,int wicket,int numofmatch){
        super(name, addr, number, status);
        this.wicket = wicket;
        this.numofmatch = numofmatch;
    }
}

