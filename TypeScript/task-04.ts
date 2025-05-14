interface Car {
  company: string;
  model: string;
  year: number;
}

const cars: Car[] = [
  { company: 'Toyota', model: 'Corolla', year: 2015 },
  { company: 'Ford', model: 'Mustang', year: 2010 },
  { company: 'Tesla', model: 'Model 3', year: 2020 }
];

const sortCarsByYear = (cars: Car[]): Car[] => [...cars].sort((a, b) => a.year - b.year);

console.log("Sorted Cars:", sortCarsByYear(cars));