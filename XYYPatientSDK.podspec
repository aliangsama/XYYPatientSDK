Pod::Spec.new do |s|
  s.name = "XYYPatientSDK"
  s.version = "1.0.0"
  s.summary = "first version of XYYPatientSDK."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"aliangsama"=>"1046694965@qq.com"}
  s.homepage = "https://github.com/aliangsama/XYYPatientSDK"
  s.description = "TODO: Add long description of the pod here."
  s.frameworks = ["WebKit", "MapKit", "CoreLocation", "Foundation", "UIKit", "MobileCoreServices", "MediaPlayer", "AddressBookUI","AddressBook","AddressBookUI","AssetsLibrary","ContactsUI"]
  s.resource_bundles = {
    'XYYPatientSDK' => ['Assets/*.{png,xib,storyboard,bundle,imageset,db}']
  }
  s.requires_arc = true
  s.source = { :path => '.' }

  s.ios.deployment_target    = '9.0'
  s.ios.vendored_framework   = 'ios/XYYPatientSDK.framework'
  s.dependency 'MBProgressHUD', '~> 1.0.0'
  s.dependency 'AFNetworking', '~> 3.1.0'
  s.dependency 'LKDBHelper', '~> 2.1.3'
  s.dependency 'NIMSDK'
  s.dependency 'Reachability', '~> 3.2'
  s.dependency 'M80AttributedLabel', '~> 1.6.3'
  s.dependency 'SDWebImage', '~> 4.2.2'
  s.dependency 'Toast', '~> 3.0'
  s.dependency 'TZImagePickerController', '~> 1.9.3'
end
