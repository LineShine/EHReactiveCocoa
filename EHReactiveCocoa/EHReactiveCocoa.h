//
//  EHReactiveCocoa.h
//  EHReactiveCocoa
//
//  Created by Josh Abernathy on 3/5/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for EHReactiveCocoa.
FOUNDATION_EXPORT double EHReactiveCocoaVersionNumber;

//! Project version string for EHReactiveCocoa.
FOUNDATION_EXPORT const unsigned char EHReactiveCocoaVersionString[];

#import <EHReactiveCocoa/RACEXTKeyPathCoding.h>
#import <EHReactiveCocoa/RACEXTScope.h>
#import <EHReactiveCocoa/NSArray+RACSequenceAdditions.h>
#import <EHReactiveCocoa/NSData+RACSupport.h>
#import <EHReactiveCocoa/NSDictionary+RACSequenceAdditions.h>
#import <EHReactiveCocoa/NSEnumerator+RACSequenceAdditions.h>
#import <EHReactiveCocoa/NSFileHandle+RACSupport.h>
#import <EHReactiveCocoa/NSNotificationCenter+RACSupport.h>
#import <EHReactiveCocoa/NSObject+RACDeallocating.h>
#import <EHReactiveCocoa/NSObject+RACLifting.h>
#import <EHReactiveCocoa/NSObject+RACPropertySubscribing.h>
#import <EHReactiveCocoa/NSObject+RACSelectorSignal.h>
#import <EHReactiveCocoa/NSOrderedSet+RACSequenceAdditions.h>
#import <EHReactiveCocoa/NSSet+RACSequenceAdditions.h>
#import <EHReactiveCocoa/NSString+RACSequenceAdditions.h>
#import <EHReactiveCocoa/NSString+RACSupport.h>
#import <EHReactiveCocoa/NSIndexSet+RACSequenceAdditions.h>
#import <EHReactiveCocoa/NSURLConnection+RACSupport.h>
#import <EHReactiveCocoa/NSUserDefaults+RACSupport.h>
#import <EHReactiveCocoa/RACBehaviorSubject.h>
#import <EHReactiveCocoa/RACChannel.h>
#import <EHReactiveCocoa/RACCommand.h>
#import <EHReactiveCocoa/RACCompoundDisposable.h>
#import <EHReactiveCocoa/RACDisposable.h>
#import <EHReactiveCocoa/RACEvent.h>
#import <EHReactiveCocoa/RACGroupedSignal.h>
#import <EHReactiveCocoa/RACKVOChannel.h>
#import <EHReactiveCocoa/RACMulticastConnection.h>
#import <EHReactiveCocoa/RACQueueScheduler.h>
#import <EHReactiveCocoa/RACQueueScheduler+Subclass.h>
#import <EHReactiveCocoa/RACReplaySubject.h>
#import <EHReactiveCocoa/RACScheduler.h>
#import <EHReactiveCocoa/RACScheduler+Subclass.h>
#import <EHReactiveCocoa/RACScopedDisposable.h>
#import <EHReactiveCocoa/RACSequence.h>
#import <EHReactiveCocoa/RACSerialDisposable.h>
#import <EHReactiveCocoa/RACSignal+Operations.h>
#import <EHReactiveCocoa/RACSignal.h>
#import <EHReactiveCocoa/RACStream.h>
#import <EHReactiveCocoa/RACSubject.h>
#import <EHReactiveCocoa/RACSubscriber.h>
#import <EHReactiveCocoa/RACSubscriptingAssignmentTrampoline.h>
#import <EHReactiveCocoa/RACTargetQueueScheduler.h>
#import <EHReactiveCocoa/RACTestScheduler.h>
#import <EHReactiveCocoa/RACTuple.h>
#import <EHReactiveCocoa/RACUnit.h>

#ifdef __IPHONE_OS_VERSION_MIN_REQUIRED
	#import <EHReactiveCocoa/MKAnnotationView+RACSignalSupport.h>
	#import <EHReactiveCocoa/UIActionSheet+RACSignalSupport.h>
	#import <EHReactiveCocoa/UIAlertView+RACSignalSupport.h>
	#import <EHReactiveCocoa/UIBarButtonItem+RACCommandSupport.h>
	#import <EHReactiveCocoa/UIButton+RACCommandSupport.h>
	#import <EHReactiveCocoa/UICollectionReusableView+RACSignalSupport.h>
	#import <EHReactiveCocoa/UIControl+RACSignalSupport.h>
	#import <EHReactiveCocoa/UIDatePicker+RACSignalSupport.h>
	#import <EHReactiveCocoa/UIGestureRecognizer+RACSignalSupport.h>
	#import <EHReactiveCocoa/UIImagePickerController+RACSignalSupport.h>
	#import <EHReactiveCocoa/UIRefreshControl+RACCommandSupport.h>
	#import <EHReactiveCocoa/UISegmentedControl+RACSignalSupport.h>
	#import <EHReactiveCocoa/UISlider+RACSignalSupport.h>
	#import <EHReactiveCocoa/UIStepper+RACSignalSupport.h>
	#import <EHReactiveCocoa/UISwitch+RACSignalSupport.h>
	#import <EHReactiveCocoa/UITableViewCell+RACSignalSupport.h>
	#import <EHReactiveCocoa/UITableViewHeaderFooterView+RACSignalSupport.h>
	#import <EHReactiveCocoa/UITextField+RACSignalSupport.h>
	#import <EHReactiveCocoa/UITextView+RACSignalSupport.h>
#elif TARGET_OS_MAC
	#import <EHReactiveCocoa/NSControl+RACCommandSupport.h>
	#import <EHReactiveCocoa/NSControl+RACTextSignalSupport.h>
	#import <EHReactiveCocoa/NSObject+RACAppKitBindings.h>
	#import <EHReactiveCocoa/NSText+RACSignalSupport.h>
#endif
