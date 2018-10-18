{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Thu Oct 18 16:41:22 2018) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",76,62,700,560);
   c1->Range(-0.1913644,-0.01556755,2.420198,11.998);
   c1->SetFillColor(42);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetLeftMargin(0.07327586);
   c1->SetRightMargin(0.1264368);
   c1->SetFrameFillColor(21);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderSize(12);
   c1->SetFrameFillColor(9);
   c1->SetFrameBorderMode(-1);
   c1->SetFrameBorderSize(12);
   
   TGraph *graph = new TGraph(20);
   graph->SetName("Graph0");
   graph->SetTitle("a simple graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(3);
   graph->SetMarkerSize(2.1);
   graph->SetPoint(0,1.8367353e-08,1.98669319);
   graph->SetPoint(1,0.09755836767,2.963987081);
   graph->SetPoint(2,0.1988689612,3.917444536);
   graph->SetPoint(3,0.2964273105,4.799392682);
   graph->SetPoint(4,0.397737904,5.657504391);
   graph->SetPoint(5,0.4990484975,6.444106791);
   graph->SetPoint(6,0.5966068468,7.183036318);
   graph->SetPoint(7,0.6979174403,7.850456537);
   graph->SetPoint(8,0.7992280338,8.422531009);
   graph->SetPoint(9,0.8967863831,8.923096173);
   graph->SetPoint(10,0.9980969766,9.328315591);
   graph->SetPoint(11,1.09940757,9.638189264);
   graph->SetPoint(12,1.196965919,9.876553628);
   graph->SetPoint(13,1.298276513,9.99573581);
   graph->SetPoint(14,1.399587106,9.99573581);
   graph->SetPoint(15,1.497145456,9.924226501);
   graph->SetPoint(16,1.598456049,9.757371446);
   graph->SetPoint(17,1.699766643,9.47133421);
   graph->SetPoint(18,1.797324992,9.113787664);
   graph->SetPoint(19,1.898635586,8.637058937);
   graph->SetPoint(20,2.5,6);
   graph->SetPoint(21,3,4);
   
   TH1F *Graph_Graph_Graph12 = new TH1F("Graph_Graph_Graph12","a simple graph",100,0.5,3.5);
   Graph_Graph_Graph12->SetMinimum(1.185789);
   Graph_Graph_Graph12->SetMaximum(10.79664);
   Graph_Graph_Graph12->SetDirectory(0);
   Graph_Graph_Graph12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph12->SetLineColor(ci);
   Graph_Graph_Graph12->GetXaxis()->SetTitle("X title");
   Graph_Graph_Graph12->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph12->GetYaxis()->SetTitle("Y title");
   Graph_Graph_Graph12->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph12->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph12);
   
   graph->Draw("acp");
   
   TPaveText *pt = new TPaveText(0.3678736,0.9342405,0.6321264,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("a simple graph");
   pt->Draw();
   TArrow *arrow = new TArrow(1,5,0.5966068468,7.183036318,0.05,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->Draw();
   arrow = new TArrow(1,5,3,4,0.05,">");
   arrow->SetFillColor(1);
   arrow->SetFillStyle(1001);
   arrow->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
   c1->ToggleToolBar();
}
