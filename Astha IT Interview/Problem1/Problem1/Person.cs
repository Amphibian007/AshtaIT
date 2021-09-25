using Problem1.Services;
using System;
using System.Collections.Generic;
using System.Text;

namespace Problem1
{
    public class Person:Service, IPersonService
    {
        public string Id { get; set; }
        public string Name { get; set; }
        public string Age { get; set; }
        public string Profession { get; set; }
        public bool Followabele { get; set; }

        public void UpdateNewsfeed()
        {
            Console.WriteLine("Newsfeed is updated");
        }
        public override void PostStatus()
        {
            Console.WriteLine("Status is posted from personal profile");
        }
    }
}
