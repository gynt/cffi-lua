

namespace settings {
  struct store
  {
    static store& instance()
    {
      static store instance_;
      return instance_;
    }
    store(const store&)=delete;            // no copy
    store& operator=(const store&)=delete; // no assignment

    bool gc_log_cdata = false;
    bool gc_log_lib = false;
    bool gc_cdata_tryExcept = false;
  private:
    store() { 

    } // constructor(s)
  };
}