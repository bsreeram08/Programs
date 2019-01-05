import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { ServerssComponent } from './serverss.component';

describe('ServerssComponent', () => {
  let component: ServerssComponent;
  let fixture: ComponentFixture<ServerssComponent>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ ServerssComponent ]
    })
    .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(ServerssComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
