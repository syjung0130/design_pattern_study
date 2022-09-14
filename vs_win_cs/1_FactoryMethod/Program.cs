using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1_FactoryMethod
{
    public interface IPerson
    {
        string GetName();
    }

    public class Villager : IPerson
    {
        public string GetName()
        {
            return "Village Person";
        }
    }

    public class CityPerson : IPerson
    {
        public string GetName()
        {
            return "City Person";
        }
    }

    public enum PersonType
    {
        Rural,
        Urban
    }

    public class Factory
    {
        public IPerson GetPerson(PersonType type)
        {
            switch (type)
            {
                case PersonType.Rural:
                    return new Villager();
                case PersonType.Urban:
                    return new CityPerson();
                default:
                    throw new NotSupportedException();
            }
        }
    }

    internal class Program
    {
        static void Main(string[] args)
        {
            Factory factory = new Factory();
            IPerson person1 = factory.GetPerson(PersonType.Rural);
            System.Console.WriteLine(person1.GetName());
            IPerson person2 = factory.GetPerson(PersonType.Urban);
            System.Console.WriteLine(person2.GetName());
        }
    }
}
