class Car{
    constructor(doors,seats){
        this.doors = doors;
        this.seats = seats;
    }
    break(){
        console.log("stop the car");
    }
    drive(){
        console.log("drive the car");
    }
    display(){
        console.log(this.doors);
        console.log(this.seats);
    }
}

export default Car;