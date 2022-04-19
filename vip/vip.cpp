proxies:
  - name: "trojan"
    type: ss
    server: 206.81.26.167
    port: 12034
    cipher: chacha20-ietf-poly1305
    password: MeMZoMT5Mi2M
     
  - name: "vmess"
    type: ss
    server: 206.81.26.167
    port: 12034
    udp: true
    cipher: chacha20-ietf-poly1305
    password: dK6lBan1XiHO
proxy-groups:
  - name: gameTROJAN
    type: url-test
    url: http://www.gstatic.com/generate_204
    interval: 300
    tolerance: 50
    proxies:
      - "trojan"
  - name: gameWS
    type: select
    proxies:
      - "vmess"
  - name: gameDIR
    type: select
    proxies:
      - DIRECT
rules:
  - DOMAIN,www.pubgmobile.com,gameTROJAN
  - DOMAIN,dl.listdl.com,gameTROJAN
  - DOMAIN,app-measurement.com,gameTROJAN
  - DOMAIN,lh3.googleusercontent.com,gameTROJAN
  - DOMAIN,android.crashsight.wetest.net,gameTROJAN
  - DOMAIN-SUFFIX,gstatic.com,gameTROJAN
  - DOMAIN-SUFFIX,gcloudcs.com,gameTROJAN
  - DOMAIN-SUFFIX,sg.tdatamaster.com,gameTROJAN
  - DOMAIN-SUFFIX,proximabeta.com,gameTROJAN
  - DOMAIN-SUFFIX,twimg.com,gameTROJAN
  - DOMAIN-SUFFIX,fbsbx.com,gameTROJAN
  - DOMAIN-SUFFIX,facebook.com,gameTROJAN
  - DOMAIN-SUFFIX,adjust.com,gameTROJAN
  - DOMAIN-SUFFIX,amsoveasea.com,gameTROJAN
  - DOMAIN-SUFFIX,gcloudsdk.com,gameTROJAN
  - DOMAIN-SUFFIX,gjacky.com,gameTROJAN
  - DOMAIN-SUFFIX,anticheatexpert.com,gameTROJAN
  - DOMAIN-SUFFIX,onezapp.com,gameTROJAN
  - DOMAIN-SUFFIX,qq.com,gameTROJAN
  - DOMAIN-SUFFIX,qcloud.com,gameTROJAN
  - DOMAIN-SUFFIX,doubleclick.com,gameTROJAN
  - DOMAIN-SUFFIX,googleapis.com,gameTROJAN
  - GEOIP,CN,gameTROJAN
  - IP-CIDR,162.0.0.0/8,gameWS
  - IP-CIDR,49.0.0.0/8,gameWS
  - IP-CIDR,20.0.0.0/8,gameWS
  - DST-PORT,9031,gameDIR
  - DOMAIN-SUFFIX,igamecj.com,gameDIR
  - MATCH,DIRECT
