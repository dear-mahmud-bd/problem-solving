var student = [
    { name: 'Mahmud', id: 1, gender: 'male' },
    { name: 'Sourav', id: 2, gender: 'male' },
    { name: 'Rosdania', id: 3, gender: 'female' },
    { name: 'Aurpi', id: 4, gender: 'female' },
    { name: 'Nawab', id: 5, gender: 'male' }
];
var filterMales = function (students) {
    return students.filter(function (s) { return s.gender !== 'female'; }).map(function (s) { return s.name; });
};
console.log("Filtered Male Students:", filterMales(student));
