#
# Be sure to run `pod lib lint EHReactiveCocoa.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'EHReactiveCocoa'
  s.version          = '0.2.0'
  s.summary          = 'ReactiveCocoa v2.5'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
                        ReactiveCocoa pod version 2.5
                       DESC

  s.homepage         = 'https://github.com/ReactiveCocoa/ReactiveCocoa'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Linc' => '240402181@qq.com' }
  s.source           = { :git => 'https://github.com/LineShine/EHReactiveCocoa.git', :tag => s.version.to_s }

  s.ios.deployment_target = '7.0'
  s.frameworks = "Foundation"

    #MRC Setting
    non_arc_files = 'EHReactiveCocoa/RACObjCRuntime.{h,m}'
    s.exclude_files = non_arc_files

    s.subspec 'no-arc' do |sp|
        sp.source_files = non_arc_files
        sp.requires_arc = false
        sp.public_header_files = 'EHReactiveCocoa/RACObjCRuntime.h'
    end

    s.subspec 'Core' do |spc|
      spc.source_files = ['EHReactiveCocoa/EHReactiveCocoa.h',
                          'EHReactiveCocoa/extobjc/RACmetamacros.h',
                          'EHReactiveCocoa/extobjc/RACEXT*.{h,m}',
                          'EHReactiveCocoa/NS*.{h,m}',
                          'EHReactiveCocoa/*.d',
                          'EHReactiveCocoa/RAC{A,B,C,D,E,G,I,K,M,P,Q,R,S,T,U,V}*.{h,m}'
                        ]
      spc.public_header_files = [ 'EHReactiveCocoa/EHReactiveCocoa.h',
                                  'EHReactiveCocoa/extobjc/RACmetamacros.h',
                                  'EHReactiveCocoa/extobjc/RACEXT*.h',
                                  'EHReactiveCocoa/NS*.h',
                                  'EHReactiveCocoa/RAC{A,B,C,D,E,G,I,K,M,P,Q,R,S,T,U,V}*.h'
                                ]
      spc.dependency 'EHReactiveCocoa/no-arc'
    
    end

    s.subspec 'UI' do |spui|
      spui.source_files = [ 'EHReactiveCocoa/UI*.{h,m}','EHReactiveCocoa/MK*.{h,m}' ]
      spui.public_header_files = [ 'EHReactiveCocoa/UI*.h','EHReactiveCocoa/MK*.h' ]
      spui.dependency 'EHReactiveCocoa/Core'

    end

end
