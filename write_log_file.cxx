void write_log_file()
{
    ifstream files;
    int nfile=0;
    string name,fname;
    files.open("files.log");
      while(!(files.eof()))
    {
      files>>fname>>name>>nfile;
      cout<<"ssd "<<fname<<nfile<<endl;
      if(files.eof()) break;
            ofstream f;
      f.open(fname.c_str());
      for(int j=1;j<=nfile;j++)
      {
          int t=j/1000;
          string temp="root://se01.indiacms.res.in//store/user/rsaxena"+name+to_string(t)+"/rootuple_jerc_l5_"+to_string(j)+".root";
          f<<temp<<endl;
      }
      f.close();
}
files.close();
}
