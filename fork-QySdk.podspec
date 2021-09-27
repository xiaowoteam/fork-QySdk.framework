Pod::Spec.new do |s|
  s.name = "fork-QySdk"
  s.version = "1.3.2"
  s.summary = "QySdk."
  s.authors = {"xiaowoteam"=>"xiaowoteam@xiaowoteam.com"}
  s.homepage = "https://github.com/xiaowoteam/fork-QySdk.framework"
  s.frameworks = ["WebKit", "CoreLocation", "CoreTelephony", "StoreKit", "AVFoundation", "AdSupport"]
  s.libraries = ["xml2"]
  s.source = { :git => 'https://github.com/xiaowoteam/fork-QySdk.framework.git', :tag => s.version.to_s }
  s.resource = 'QYResource.bundle'

  s.ios.deployment_target    = '9.0'
  s.ios.vendored_framework   = 'QySdk.framework'
end
