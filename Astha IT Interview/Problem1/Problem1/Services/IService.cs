using System;
using System.Collections.Generic;
using System.Text;

namespace Problem1.Services
{
    public interface IService
    {
        public void Attach();
        public void Detach();
        public void PostStatus();
    }
}
