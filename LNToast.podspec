
Pod::Spec.new do |s|

  s.name         = "LNToast"
  s.version      = "0.0.1"
  s.summary      = "LNToast like the Android Toast in iOS"

  s.description  = <<-DESC
                   * LNToast like the Android Toast in iOS
                   DESC

  s.homepage     = "http://EXAMPLE/LNToast"

  s.license      = "MIT"

  s.author       = { "Liuonion" => "liuonion@126.com" }

  s.source       = { :git => "http://EXAMPLE/LNToast.git", :tag => "0.0.1" }

  s.source_files  = "LNToastLib/*.{h,m}"

  s.frameworks = 'Foundation', 'UIKit', 'CoreGraphics'

end
