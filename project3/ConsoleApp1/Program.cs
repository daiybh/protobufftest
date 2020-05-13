using System;
using System.IO;

namespace ConsoleApp1
{
    internal class Program
    {
        private static void print(GoogleProtoBB.Value_Recorder_Train_In_Out value)
        {
            System.Console.WriteLine("\n");
            System.Console.WriteLine("count:{0}", value.Count);
            for (int i = 0; i < value.Count; i++)
            {
                System.Console.WriteLine("trainin:{0}", value.TrainIn[i]);
                System.Console.WriteLine("trainout:{0}", value.TrainOut[i]);
            }
        }

        private static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            byte[] by = new byte[1024];

            var input = File.OpenRead("c:\\logs\\bbb.txt");
            int nlen = input.Read(by);//, 5, 50);
            var v = GoogleProtoBB.BroadCastData.Parser.ParseFrom(by, 0, nlen);//, 5, nlen);
            // var v = GoogleProtoBB.Value_Recorder_Train_In_Out.Parser.ParseFrom(input);
            print(v.RecorderTrainInOut);
            var ps = v.PlayerStatus;
            if (ps != null)
                Console.WriteLine(v.PlayerStatus.Count);
            else
                Console.WriteLine("nulll");
        }
    }
}