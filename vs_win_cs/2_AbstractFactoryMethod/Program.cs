using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _2_AbstractFactoryMethod
{
    public interface IProduct
    {
        String GetName();
        bool SetPrice(double price);
    }

    public class Phone : IProduct
    {
        private double _price;

        public string GetName()
        {
            return "Apple TouchPad";
        }

        public bool SetPrice(double price)
        {
            _price = price;
            return true;
        }
    }

    // Almost same as Factory, just an additional exposure todo something with the created method
    public abstract class ProductAbstractFactory
    {
        protected abstract IProduct MakeProduct();

        public IProduct GetObject() // Implementation of Factory Method.
        {
            return this.MakeProduct();
        }
    }

    public class PhhoneConcreteFactory : ProductAbstractFactory
    {
        protected override IProduct MakeProduct()
        {
            IProduct product = new Phone();
            // Do Something with the object after you get the object
            product.SetPrice(30);
            return product;
        }
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            ProductAbstractFactory factory = new PhhoneConcreteFactory();
            IProduct product = factory.GetObject();
            Console.WriteLine("Name: " + product.GetName());
        }
    }
}
