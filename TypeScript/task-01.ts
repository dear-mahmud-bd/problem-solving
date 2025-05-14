interface Student {
  name: string;
  id: number;
  gender: 'male' | 'female';
}

const student: Student[] = [
  { name: 'Mahmud', id: 1, gender: 'male' },
  { name: 'Sourav', id: 2, gender: 'male' },
  { name: 'Rosdania', id: 3, gender: 'female' },
  { name: 'Aurpi', id: 4, gender: 'female' },
  { name: 'Nawab', id: 5, gender: 'male' }
];

const filterMales = (students: Student[]): string[] =>
  students.filter(s => s.gender !== 'female').map(s => s.name);

console.log("Filtered Male Students:", filterMales(student));