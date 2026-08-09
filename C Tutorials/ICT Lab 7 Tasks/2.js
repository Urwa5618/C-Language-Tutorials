function convertToFahrenheit(celsius) {
    let fahrenheit = (celsius * 9/5) + 32;
    console.log(`${celsius}°C is equal to ${fahrenheit}°F`);
}

function convertToCelsius(fahrenheit) {
    let celsius = (fahrenheit - 32) * 5/9;
    console.log(`${fahrenheit}°F is equal to ${celsius.toFixed(2)}°C`);
}
convertToFahrenheit(25);
convertToCelsius(77);
