const isLeapYear = (year: number): boolean => {
  return (year % 4 === 0 && year % 100 !== 0) || year % 400 === 0;
};

const year: number = 2025;

console.log(`${year} is ${isLeapYear(year)?"Leap Year":"Not Leap Year"}`);