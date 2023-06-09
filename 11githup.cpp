using System;

class Program
{
    static void Main(string[] args)
    {
        // a) Dizinin boyutunu ve elemanlarını kullanıcıdan isteyiniz.
        Console.Write("Dizi boyutunu giriniz: ");
        int size = Convert.ToInt32(Console.ReadLine());

        int[] arr = new int[size];
        Console.WriteLine("Dizi elemanlarını giriniz:");
        for (int i = 0; i < size; i++)
        {
            Console.Write("Eleman {0}: ", i + 1);
            arr[i] = Convert.ToInt32(Console.ReadLine());
        }

        // b) Dizide aranacak olan elemanı kullanıcıdan isteyiniz.
        Console.Write("Aranacak elemanı giriniz: ");
        int target = Convert.ToInt32(Console.ReadLine());

        // c) Aranılan elemanın dizide olup olmadığının kontrolünü Linear Search kullanarak yapınız.
        bool found = LinearSearch(arr, target);

        if (found)
            Console.WriteLine("Aranan eleman dizide bulundu.");
        else
            Console.WriteLine("Aranan eleman dizide bulunamadı.");

        Console.ReadLine();
    }

    static bool LinearSearch(int[] arr, int target)
    {
        for (int i = 0; i < arr.Length; i++)
        {
            if (arr[i] == target)
                return true;
        }
        return false;
    }
}
