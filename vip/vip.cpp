proxies:
  - name: ws
    type: vmess
    server: ae4.vpnjantit.com
    port: 80
    uuid: 222bcff0-8e09-11ef-a9be-03bd2314dc6d
    alterId: 0
    cipher: auto
    #udp: true
    tls: false
    skip-cert-verify: true
    network: ws
    ws-opts:
      path: /vpnjantit
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

  - MATCH,gameTLS
