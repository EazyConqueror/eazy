proxies:
  - name: ws
    type: vmess
    server: us1.socifiles.com
    port: 443
    uuid: 55ee66a0-f2d7-11ee-a591-1239d0255272
    alterId: 0
    cipher: auto
    #udp: true
    #tls: true
    skip-cert-verify: true
    network: ws
    ws-opts:
      path: /vmws
      headers:
        Host: google.com
proxy-groups:
  - name: gameTLS
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    proxies:
      - ws
rules:
  - DST-PORT,9030,gameTLS
  - DST-PORT,9031,gameTLS
  - DST-PORT,20000,gameTLS
  - DST-PORT,20001,gameTLS
  - DST-PORT,20002,gameTLS
  - DOMAIN,www.pubgmobile.com,gameTLS
  - DOMAIN,dl.listdl.com,gameTLS
  - DOMAIN,crl3.digicert.com,gameTLS
  - DOMAIN,www.microvirt.com,gameTLS
  - DOMAIN,android-safebrowsing.google.com,gameTLS
  - DOMAIN,app-measurement.com,gameTLS
  - DOMAIN,lh3.googleusercontent.com,gameTLS
  - DOMAIN,android.crashsight.wetest.net,gameTLS
  - DOMAIN-SUFFIX,gstatic.com,gameTLS
  - DOMAIN-SUFFIX,gcloudcs.com,gameTLS
  - DOMAIN-SUFFIX,sg.tdatamaster.com,gameTLS
  - DOMAIN-SUFFIX,proximabeta.com,gameTLS
  - DOMAIN-SUFFIX,twimg.com,gameTLS
  - DOMAIN-SUFFIX,fbsbx.com,gameTLS
  - DOMAIN,graph.facebook.com,gameTLS
  - DOMAIN-SUFFIX,adjust.com,gameTLS
  - DOMAIN-SUFFIX,amsoveasea.com,gameTLS
  - DOMAIN-SUFFIX,gcloudsdk.com,gameTLS
  - DOMAIN-SUFFIX,gjacky.com,gameTLS
  - DOMAIN-SUFFIX,anticheatexpert.com,gameTLS
  - DOMAIN-SUFFIX,onezapp.com,gameTLS
  - DOMAIN-SUFFIX,qcloud.com,gameTLS
  - DOMAIN-SUFFIX,doubleclick.com,gameTLS
  - DOMAIN-SUFFIX,googleapis.com,gameTLS
  - DOMAIN-SUFFIX,gvt1.com,gameTLS
  - DOMAIN-SUFFIX,igamecj.com,gameTLS
  - DOMAIN-SUFFIX,qq.com,gameTLS
  - DOMAIN-SUFFIX,gcloudcs.com,gameTLS
  - IP-CIDR,203.205.239.243/24,gameTLS
  - IP-CIDR,129.226.2.165/24,gameTLS
  - IP-CIDR,172.16.0.1/24,gameTLS
  - IP-CIDR,137.208.72.137/24,gameTLS
  - IP-CIDR,162.0.0.0/8,gameTLS
  - IP-CIDR,49.0.0.0/8,gameTLS
  - IP-CIDR,20.0.0.0/8,gameTLS
  - GEOIP,CN,gameTLS
  - DOMAIN-SUFFIX,version.common.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,csoversea.castle.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,client.common.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,d.network.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,freefiremobile-a.akamaihd.net,gameTLS
  - DOMAIN-SUFFIX,id.event.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,dl.wsu.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,login.common.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,bling2.midasplayer.com,gameTLS
  - DOMAIN-SUFFIX,dl.castle.freefiremobile.com,gameTLS
  - DOMAIN-SUFFIX,ff.garena.com,gameTLS
  - DOMAIN-SUFFIX,garena.com,gameTLS
  - MATCH,DIRECT
