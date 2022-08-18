//Bellmen ford
vector <int> maximumDistance(vector<vector<int>> edges,int v,int e,int src)
      {
            // code here
                vector<int>dist(v,INT_MIN);
              dist[src]=0;
              for(int i=0;i<v-1;i++)
              {
                  for(int j=0;j<e;j++)
                  {
                      int x=edges[j][0];
                      int y=edges[j][1];
                      int w=edges[j][2];
                      if(dist[x]!=INT_MIN&&dist[x]+w>dist[y])
                      dist[y]=dist[x]+w;
                  }
              }
              return dist;
      }
