class Thermostat{
    constructor(temp){
      this._temp = temp;
    }
    get temperature(){
      return ((5/9)*(this._temp-32));
    }
    set temperature(t){
      let F = t * 9.0 / 5 + 32
      this._temp = F;
    }
  }
  
  const thermos = new Thermostat(76); // Setting in Fahrenheit scale
  let temp = thermos.temperature;
  console.log(temp); // 24.44 in Celsius
  thermos.temperature = 26;
  console.log(thermos.temperature)
  temp = thermos.temperature;