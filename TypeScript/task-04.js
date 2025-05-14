var __spreadArray = (this && this.__spreadArray) || function (to, from, pack) {
    if (pack || arguments.length === 2) for (var i = 0, l = from.length, ar; i < l; i++) {
        if (ar || !(i in from)) {
            if (!ar) ar = Array.prototype.slice.call(from, 0, i);
            ar[i] = from[i];
        }
    }
    return to.concat(ar || Array.prototype.slice.call(from));
};
var cars = [
    { company: 'Toyota', model: 'Corolla', year: 2015 },
    { company: 'Ford', model: 'Mustang', year: 2010 },
    { company: 'Tesla', model: 'Model 3', year: 2020 }
];
var sortCarsByYear = function (cars) { return __spreadArray([], cars, true).sort(function (a, b) { return a.year - b.year; }); };
console.log("Sorted Cars:", sortCarsByYear(cars));
