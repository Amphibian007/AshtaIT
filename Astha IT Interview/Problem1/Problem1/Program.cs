using System;

namespace Problem1
{
    class Program
    {
        static void Main(string[] args)
        {
            var person1 = new Person();
            person1.Attach();
            var page1 = new Page();
            page1.PostStatus();
        }
    }
}
