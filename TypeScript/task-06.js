var isLeapYear = function (year) {
    return (year % 4 === 0 && year % 100 !== 0) || year % 400 === 0;
};
var year = 2025;
console.log("".concat(year, " is ").concat(isLeapYear(year) ? "Leap Year" : "Not Leap Year"));
