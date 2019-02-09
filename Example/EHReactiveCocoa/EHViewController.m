//
//  EHViewController.m
//  EHReactiveCocoa
//
//  Created by 240402181@qq.com on 02/06/2019.
//  Copyright (c) 2019 240402181@qq.com. All rights reserved.
//

#import "EHViewController.h"
#import <EHReactiveCocoa.h>

@interface EHViewController ()

@end

@implementation EHViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [btn setTitle:@"RAC Button" forState:UIControlStateNormal];
    btn.frame = CGRectMake(100, 100, 100, 40);
    [btn setBackgroundColor:[UIColor redColor]];
    [self.view addSubview:btn];
    
    [[btn rac_signalForControlEvents:UIControlEventTouchUpInside] subscribeNext:^(id x) {
        NSLog(@"RAC Btn Click");
    }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
