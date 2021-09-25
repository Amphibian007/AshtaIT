using Problem1.Services;
using System;
using System.Collections.Generic;
using System.Text;

namespace Problem1
{
    public class Page:Service
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public bool Followabe { get; set; }
        public override void PostStatus()
        {
            Console.WriteLine("Status is posted from the page");
        }
    }
}
