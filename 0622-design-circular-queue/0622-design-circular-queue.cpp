class MyCircularQueue {
public:
    vector<int> v;
    int f,r,n;
    MyCircularQueue(int k) 
    {
        n=k;
        v.resize(k);
        f=-1;
        r=-1;
    }
    
    bool enQueue(int value) 
    {
        if(isFull())
            return false;
        if(f==-1 && r==-1)
        {
            f=0;
            r=0;
        }
        else
        {
            r=(r+1)%n;
        }
        v[r]=value;
        return true;
    }
    
    bool deQueue() 
    {
        if(isEmpty())
        {
            return false;
        }
        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
        {
            f=(f+1)%n;
        }
        return true;
    }
    
    int Front() 
    {
        if(isEmpty())
        {
            return -1;
        }
        return(v[f]);
    }
    
    int Rear() 
    {
        if(isEmpty())
        {
            return -1;
        }
        return(v[r]);
    }
    
    bool isEmpty() 
    {
        if(f==-1 && r==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool isFull() 
    {
        if(f==(r+1)%n)
            return true;
        else
            return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */