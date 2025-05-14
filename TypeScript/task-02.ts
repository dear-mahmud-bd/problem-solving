interface Book {
  title: string;
  author: string;
  year: number;
}

const books: Book[] = [
  { title: 'Book_A', author: 'Author_1', year: 2001 },
  { title: 'Book_B', author: 'Author_2', year: 2003 },
  { title: 'Book_C', author: 'Author_3', year: 2005 }
];

const getBookTitles = (books: Book[]): string[] => books.map(b => b.title);

console.log("Book Titles:", getBookTitles(books));