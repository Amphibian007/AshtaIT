using System;
using System.Collections.Generic;
using System.Text;

namespace Problem1.Services
{
    public class Service : IService
    {
        public virtual void Attach()
        {
            Console.WriteLine("Entity is attached");
        }

        public virtual void Detach()
        {
            Console.WriteLine("Entity is detached");
        }

        public virtual void PostStatus()
        {
            Console.WriteLine("Status is posted");
        }
    }
}
