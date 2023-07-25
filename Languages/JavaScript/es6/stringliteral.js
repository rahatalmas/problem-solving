var a = 5;
var b = 10;

function foo(strings, ...values) {
    console.log(strings);
    console.log(...strings);
    console.log(values)
    console.log(...values);
    console.log("\n");
}

foo`Sum${a + b}Product${a * b}Division${b / a}`;
foo`myself ${"rahat"} id ${a}`;